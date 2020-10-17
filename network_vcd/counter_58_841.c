#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_54426700;

SignalI clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeclk_54424760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_841_54426700;
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

SignalI ack_54424740_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack_54424740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54424740_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_841_54426700;
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

SignalI rst_54424720_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerst_54424720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54424720_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_841_54426700;
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

SignalI ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__mac_54424680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_841_54426700;
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

Block __54405560;

Block __54405300;

void code__54405300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65261860(),q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__65261800(),ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54405300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54405300 = block;
   block->owner = (Object)__54405560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54405300;

   return block;
};

Block __54404400;

Block __54404240;

Block __54403440;

void code__54403440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__65261340(),q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__65261260(),ack__mac_54424680_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54403440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54403440 = block;
   block->owner = (Object)__54404240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54403440;

   return block;
};

void code__54404240() {
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
                  src0 = q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65261540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__65261420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54403440();
   }
      }
   }
}

Block make__54404240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54404240 = block;
   block->owner = (Object)__54404400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54404240;

   return block;
};

void code__54404400() {
 code__54404240();
}

Block make__54404400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54404400 = block;
   block->owner = (Object)__54405560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54404400;

   return block;
};

void code__54405560() {
   {
      Value cond = rst_54424720_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54405300();
   }
   else if (value2integer(ack_54424740_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value)) {
  code__54404400();
   }
      }
   }
}

Block make__54405560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54405560 = block;
   block->owner = (Object)__54427020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54405560;

   return block;
};

Value make__65261860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__65261800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__65261540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65261420() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65261340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__65261260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_54406080;

SignalI q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeq_54405700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_54405700_counter_58_84_54406080_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_84_54406080;
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

Behavior __54427020;

Behavior make__54427020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54427020 = behavior;
   behavior->owner = (Object)counter_58_84_54406080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg += 1;
   clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg = realloc(clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg,clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg*sizeof(Object));
clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg[clk_54424760_counter_58_841_54426700_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg-1] = (Object)behavior;
   behavior->block = make__54405560();

   return behavior;
}

Scope makecounter_58_84_54406080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_54406080 = scope;
   scope->owner = (Object)counter_58_841_54426700;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_54405700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54427020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_54426700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_54426700 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54424760();
   systemT->inputs[1] = makeack_54424740();
   systemT->inputs[2] = makerst_54424720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_54424680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_54406080();

   return systemT;
}