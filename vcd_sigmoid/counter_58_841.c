#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_43809620;

SignalI clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeclk_45443180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_841_43809620;
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

SignalI ack_45443160_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack_45443160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_45443160_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_841_43809620;
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

SignalI rst_45443120_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerst_45443120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_45443120_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_841_43809620;
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

SignalI ack__mac_45441560_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack__mac_45441560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_45441560_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_841_43809620;
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

Block __42070080;

Block __42066940;

void code__42066940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49045720(),q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49045640(),ack__mac_45441560_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__42066940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42066940 = block;
   block->owner = (Object)__42070080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42066940;

   return block;
};

Block __42250700;

Block __42248240;

Block __42393160;

void code__42393160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49117240(),q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49117100(),ack__mac_45441560_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__42393160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42393160 = block;
   block->owner = (Object)__42248240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42393160;

   return block;
};

void code__42248240() {
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
                  src0 = q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49118480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49117380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42393160();
   }
      }
   }
}

Block make__42248240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42248240 = block;
   block->owner = (Object)__42250700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42248240;

   return block;
};

void code__42250700() {
 code__42248240();
}

Block make__42250700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42250700 = block;
   block->owner = (Object)__42070080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42250700;

   return block;
};

void code__42070080() {
   {
      Value cond = rst_45443120_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42066940();
   }
   else if (value2integer(ack_45443160_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value)) {
  code__42250700();
   }
      }
   }
}

Block make__42070080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42070080 = block;
   block->owner = (Object)__42923140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42070080;

   return block;
};

Value make__49045720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49045640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49118480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49117380() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49117240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49117100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_41987940;

SignalI q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeq_42071060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_42071060_counter_58_84_41987940_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)counter_58_84_41987940;
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

Behavior __42923140;

Behavior make__42923140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42923140 = behavior;
   behavior->owner = (Object)counter_58_84_41987940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg += 1;
   clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg = realloc(clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg,clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg*sizeof(Object));
clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg[clk_45443180_counter_58_841_43809620_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg-1] = (Object)behavior;
   behavior->block = make__42070080();

   return behavior;
}

Scope makecounter_58_84_41987940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_41987940 = scope;
   scope->owner = (Object)counter_58_841_43809620;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_42071060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42923140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_43809620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_43809620 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_45443180();
   systemT->inputs[1] = makeack_45443160();
   systemT->inputs[2] = makerst_45443120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_45441560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_41987940();

   return systemT;
}